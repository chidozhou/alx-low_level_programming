/**
 * main - The Entry Point
 * Desc: 'prints the alphabet, in lowercase'
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
