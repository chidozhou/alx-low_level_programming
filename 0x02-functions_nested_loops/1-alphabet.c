/**
 * main - The Entry Point
 * Desc: 'prints lowercase'
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		_putchar(cha);
	}
	_putchar('\n');
}
