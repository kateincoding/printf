/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len1, len2;
    unsigned int ui;
    void *addr;

  len1 = printf("Hello %s", "");
  printf(" => %d\n", len1);
  len2 = _printf("Hello %s", "");
  printf(" => %d\n", len2);
  printf("Correct1: %d\n\n", len1 == len2);
  len1 = printf("Hello %s ... ", "...");
  printf(" => %d\n", len1);
  len2 = _printf("Hello %s ... ", "...");
  printf(" => %d\n", len2);
  printf("Correct2: %d\n\n", len1 == len2);
  len1 = printf("Hello %s ... ", NULL);
  printf(" => %d\n", len1);
  len2 = _printf("Hello %s ... ", NULL);
  printf(" => %d\n", len2);
  printf("Correct3: %d\n\n", len1 == len2);
  len1 = printf("Hello %s ... ", NULL);
  printf(" => %d\n", len1);
  len2 = _printf("Hello %s ... ", NULL);
  printf(" => %d\n", len2);
  printf("Correct4: %d\n\n", len1 == len2);
  len1 = printf("Hello %s ... ", "...");
  printf(" => %d\n", len1);
  len2 = _printf("Hello %s ... ", "...");
  printf(" => %d\n", len2);
  printf("Correct5: %d\n\n", len1 == len2);
  len1 = printf("Hello %s ... ", "Holberton");
  printf(" => %d\n", len1);
  len2 = _printf("Hello %s ... ", "Holberton");
  printf(" => %d\n", len2);
  printf("Correct6: %d\n\n", len1 == len2);
  len1 = printf("Hello %c %c %c %c %c", 'H', 'l', 'b', 't', 'n');
  printf(" => %d\n", len1);
  len2 = _printf("Hello %c %c %c %c %c", 'H', 'l', 'b', 't', 'n');
  printf(" => %d\n", len2);
  printf("Correct7: %d\n\n", len1 == len2);
  len1 = printf("Hello %%");
  printf(" => %d\n", len1);
  len2 = _printf("Hello %%");
  printf(" => %d\n", len2);
  printf("Correct8: %d\n\n", len1 == len2);
  len1 = printf("Unknown:[%s]", "\0");
  printf(" => %d\n", len1);
  len2 = _printf("Unknown:[%s]", "\0");
  printf(" => %d\n", len2);
  printf("Correct9: %d\n\n", len1 == len2);
  len1 = printf("Unknown solo comillas printf:[%s] %s", "");
  printf(" => %d\n", len1);
  len2 = _printf("Unknown solo comillas _rintf:[%s] %s", "");
  printf(" => %d\n", len2);
  printf("Correct10: %d\n\n", len1 == len2);
  len1 = printf(NULL, "");
  printf(" => %d\n", len1);
  len2 = _printf(NULL, "");
  printf(" => %d\n", len2);
  printf("Correct11: %d\n\n", len1 == len2);
  len1 = printf("*", NULL);
  printf(" => %d\n", len1);
  len2 = _printf("*", NULL);
  printf(" => %d\n", len2);
  printf("Correct12: %d\n\n", len1 == len2);
  len1 = printf("Hello %c", '\0', 'l', 'b', 't', 'n');
  printf(" => %d\n", len1);
  len2 = _printf("Hello %c", '\0', 'l', 'b', 't', 'n');
  printf(" => %d\n", len2);
  printf("Correct13: %d\n\n", len1 == len2);
/*
    printf("-------CHAR CASE percent y n ------\n");
    len = _printf("h_ %% %% jnd%       jjjh hhh\n");
    len2 = printf("ho %% %% jnd%       jjjh hhh\n");
    printf("Length2:[_printf:%d, printf:%d]\n", len, len2);
    printf("-------CHAR CASE percent + null ------\n");
    _printf("h_ %% %% jnd%\0 _printf\n");
    _printf("\n");
    printf("ho %% %% jnd%\0 oprintf\n");
    _printf("\n");
    printf("-------CHAR CASES one percent------\n");
	len = _printf("h_ %% %% jnd%%%%%       h hhh\n");
	len2 = printf("ho %% %% jnd%%%%%       h hhh\n");
    printf("Length2:[_printf:%d, printf:%d]\n", len, len2);
*/
    return (0);
}