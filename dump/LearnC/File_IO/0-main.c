#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fp;

	fp = fopen("filename.txt", "w");

	/* processing of the file */
	fprintf(fp, "%s", "Hello World");
	/* end of processing */

	fclose(fp);

	return (0);
}
