#pragma once

enum class VersionType : int
{
	Start,
	RemasteredSeptember2022 = Start,
	LPDecember2024,
	Count,
	End = Count,
};

template <typename T>
class VersioningStruct
{
public:
	VersioningStruct();
	~VersioningStruct() = default;

	VersioningStruct(const std::vector<T>& versions);

	operator T();

public:
	T& Get();
	T GetValue();

private:
	static VersionType GetVersion();

private:
	std::vector<T> myVersions;
};

template <typename T> VersioningStruct<T>::VersioningStruct()
	: myVersions(std::vector<T>(static_cast<int>(VersionType::Count), 0))
{
}

template <typename T> VersioningStruct<T>::VersioningStruct(const std::vector<T>& versions)
	: myVersions(versions)
{
	if (myVersions.size() != static_cast<size_t>(VersionType::Count))
	{
		myVersions.resize(static_cast<int>(VersionType::Count), NULL);
	}
}

template <typename T> VersioningStruct<T>::operator T()
{
	return Get();
}