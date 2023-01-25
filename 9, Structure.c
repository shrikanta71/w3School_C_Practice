#include<stdio.h>

struct Student{
    char name[50];
    char Id[50];
    int age;
};

int main()
{
  struct Student Student1 = {"Shrikanta Paul", "221-15-4868", 21};
  struct Student Student2 = {"Naim-Ul Hossain Anik", "221-15-5988", 21};
  struct Student Student3 = {"ASIFUL ISLAM", "221-15-5919", 21};

  printf("%s %s %d\n", Student1.name, Student1.Id, Student1.age);
  printf("%s %s %d\n", Student2.name, Student2.Id, Student2.age);
  printf("%s %s %d\n", Student3.name, Student3.Id, Student3.age);

  return 0;
}

