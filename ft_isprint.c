int isprint(int c)
{
	if(c == 127 || (c >= 0 && c <= 31))
	{
		return (0);
	}
	return (1);
}
