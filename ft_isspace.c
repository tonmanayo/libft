int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' ||\
		c == '\v' || c == '\f' || c == '\r' || c == ' ' ? 1 : 0);
}

int main()
{
	ft_isspace(' ');
}
