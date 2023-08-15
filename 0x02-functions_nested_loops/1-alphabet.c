#include "main.h"
#include "main.h"


	/**
	 * main - check the code
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    print_alphabet();
	    return (0);
	}


	/**
	 * print_alphabet - print all alphabet in lowercase
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
