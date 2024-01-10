#include "get_next_line.h"
#include <fcntl.h>
#include <printf.h>
#include <string.h>

int gnl_test(int fd, char *expected, int test_nb)
{
  char  *result;

  result = get_next_line(fd);
  if (!result && expected || result && !expected)
  {
    printf("\033[0;31m");
    printf("%i.FAIL -> ", test_nb);
    printf("expected: %s, got: %s\n", expected, result);
    printf("\033[0m");
    free(result);
    return (0);
  }
  if ((!result && !expected) || strcmp(result, expected) == 0)
  {
    printf("\033[0;32m");
    printf("%i.PASSED ", test_nb);
    printf("\033[0m");
    free(result);
    return (1);
  }
  printf("\033[0;31m");
  printf("%i.FAIL -> ", test_nb);
  printf("expected: %s, got: %s\n", expected, result);
  printf("\033[0m");
  free(result);
  return (0);
}

int main()
{
  int   fd;
  char  *expected;
  int   i;
  int   j;

  printf("🧪 Tests of mandatory part\n\n");

  printf("-> BUFFER_SIZE = %i\n\n", BUFFER_SIZE);

  /* ********** */

  printf("empty_file: ");
  fd = open("files/empty.txt", O_RDONLY);
  gnl_test(fd, NULL, 1);
  gnl_test(fd, NULL, 2);
  printf("\n");
  close(fd);

  /* ********** */

  printf("line_nl: ");
  fd = open("files/line_nl.txt", O_RDONLY);
  gnl_test(fd, "another test.\n", 1);
  gnl_test(fd, NULL, 2);
  printf("\n");
  close(fd);

  /* ********** */

  printf("line_no_nl: ");
  fd = open("files/line_no_nl.txt", O_RDONLY);
  gnl_test(fd, "this is a test!", 1);
  gnl_test(fd, NULL, 2);
  printf("\n");
  close(fd);

  /* ********** */

  printf("long_line_nl: ");
  fd = open("files/long_line_nl.txt", O_RDONLY);

  expected = (char *)malloc(10000 + 2 * sizeof(char));
  if (!expected)
  {
    printf("Error in malloc on main.c test!");
    return (0);
  }

  i = 0;
  j = '0';
  while (i < 10000)
  {
    if (j == '9' + 1)
      j = '0';
    expected[i] = j;
    j++;
    i++;
  }
  expected[10000] = '\n';
  expected[10001] = '\0';

  gnl_test(fd, expected, 1);
  gnl_test(fd, NULL, 2);
  printf("\n");
  free(expected);
  close(fd);

  /* ********** */

  printf("long_line_no_nl: ");
  fd = open("files/long_line_no_nl.txt", O_RDONLY);

  expected = (char *)malloc(10000 + 1 * sizeof(char));
  if (!expected)
  {
    printf("Error in malloc on main.c test!");
    return (0);
  }

  i = 0;
  j = '0';
  while (i < 10000)
  {
    if (j == '9' + 1)
      j = '0';
    expected[i] = j;
    j++;
    i++;
  }
  expected[10000] = '\0';

  gnl_test(fd, expected, 1);
  gnl_test(fd, NULL, 2);
  printf("\n");
  free(expected);
  close(fd);

  /* ********** */

  printf("many_lines: ");
  fd = open("files/many_lines.txt", O_RDONLY);
  gnl_test(fd, "this is a test!\n", 1);
  gnl_test(fd, "\n", 2);
  gnl_test(fd, "another test...\n", 3);
  gnl_test(fd, "\n", 4);
  gnl_test(fd, "and another :/\n", 5);
  gnl_test(fd, "this is the end :D", 6);
  gnl_test(fd, NULL, 7);
  printf("\n");
  close(fd);

  /* ********** */

  printf("one_char_no_nl: ");
  fd = open("files/one_char_no_nl.txt", O_RDONLY);
  gnl_test(fd, "a", 1);
  gnl_test(fd, NULL, 2);
  printf("\n");
  close(fd);

  /* ********** */

  printf("one_char_nl: ");
  fd = open("files/one_char_nl.txt", O_RDONLY);
  gnl_test(fd, "a\n", 1);
  gnl_test(fd, NULL, 2);
  printf("\n");
  close(fd);

  /* ********** */

  printf("only_nl: ");
  fd = open("files/only_nl.txt", O_RDONLY);
  gnl_test(fd, "\n", 1);
  gnl_test(fd, NULL, 2);
  printf("\n");
  close(fd);

  /* ********** */

  printf("ten_nl: ");
  fd = open("files/ten_nl.txt", O_RDONLY);
  gnl_test(fd, "\n", 1);
  gnl_test(fd, "\n", 2);
  gnl_test(fd, "\n", 3);
  gnl_test(fd, "\n", 4);
  gnl_test(fd, "\n", 5);
  gnl_test(fd, "\n", 6);
  gnl_test(fd, "\n", 7);
  gnl_test(fd, "\n", 8);
  gnl_test(fd, "\n", 9);
  gnl_test(fd, "\n", 10);
  gnl_test(fd, NULL, 11);
  printf("\n");
  close(fd);

  /* ********** */

  printf("fd_errors ");
  fd = open("files/ghost.txt", O_RDONLY);
  gnl_test(fd, NULL, 1);
  printf("\n");
  close(fd);

  /* ********** */

  printf("many_lines ");
  fd = open("files/many_lines.txt", O_RDONLY);
  gnl_test(fd, "this is a test!\n", 1);
  printf("\n");
  close(fd);

  /* ********** */

  // stdin
  // limits
  return (0);
}
