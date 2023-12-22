#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	int stud_id;
	int name_len;
	int struct_size;
	char name[0];
} student;

student *createStudent(student* new, int id, char name[]) {
	new = malloc(sizeof(*new) + sizeof(char) * strlen(name));

	new->stud_id = id;
	new->name_len = strlen(name);
	strcpy(new->name, name);

	new->struct_size = (sizeof(*new) + sizeof(char) * strlen(name)); 

	return new;
}

void print(student *new) {
	printf("Student name: %s\n"
					"Studen id: %d\n"
					"Name length: %d\n"
					"Struct size: %d\n\n", new->name, new->stud_id, new->name_len, new->struct_size);
}

int main () {

	student *s1, *s2; 
	s1 = createStudent(s1, 10, "Mandioca");
	s2 = createStudent(s2, 11, "Beterraba");

	print(s1);
	print(s2);
	return 0;
}
