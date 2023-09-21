void *memset(void *s, int c, size_t n)
{
	int  i;
	i = 0;
	while(s[i] != '\0' && s[i] < n)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
}
