#include <stdio.h>
#include <stdlib.h>

int *makeArray(int argc, char *argv[]);

int main(int argc, char *argv[])
{
  int num, *table;
  double sum = 0.0;
  if (argc < 1)
  {
    fprintf(stderr, "Arguments are not specified.\n");
    exit(1);
  }

  table = makeArray(argc, argv);

  num = argc - 1;
  for (int i = 0; i < num; i++)
  {
    sum += table[i];
  }

  printf("Average of %d doubles is %.2f.\n", num, sum / num);
  free(table);

  return 0;
}

int *makeArray(int argc, char *argv[])
{
  int num, *table;

  num = argc - 1;
  table = malloc(sizeof(int) * num);
  if (table == NULL)
  {
    fprintf(stderr, "Memory Shortage.\n");
    exit(1);
  }

  for (int i = 0; i < num; i++)
  {
    *(table + i) = atof(argv[i + 1]);
  }

  return table;
}