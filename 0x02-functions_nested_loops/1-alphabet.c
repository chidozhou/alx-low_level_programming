/**
 * main - The Entry Point
 * Desc: 'prints the alphabet, in lowercase'
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char cha;

	for (cha= 'a'; cha <= 'z'; cha++)
		_putchar(cha);

	_putchar('\n');
}
