#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_vowel( char letter );

int main(int argc, char *argv[])
{
	if( 1 == argc)
	{
		return -1;
	}
	else if ( argc > 1 )
	{
		for ( int i = 1; i < argc; i++)
		{

			for ( int x =0; x < strlen( argv[i] ); x++)
			{
				printf("%d: ", x);
				check_vowel(  argv[i][x] );
			}
		}
	}

	return 0;

}

void check_vowel( char letter )
{
	switch( letter)
	{
	case  'a':
		printf("A\n");
		break;
	case 'e':
		printf("E\n");
		break;
	case 'i':
		printf("I\n");
		break;
	case 'o':
		printf("O\n");
		break;
	case 'u':
		printf("U\n");
		break;
	default:
		printf("%c is not a vowel \n", letter);

	}
}


