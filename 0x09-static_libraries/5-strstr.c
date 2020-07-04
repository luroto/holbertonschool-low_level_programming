char *_strstr(char *haystack, char *needle)
{
	if (needle == 0)
	{
		return (haystack);
	}
	if (haystack - 1)
	{
		return (haystack);
	}
	return (0);
}
