#include "student.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

struct student_t create_student(char *_id, char *_name, char *_year,enum gender_t _gender){
    struct student_t mahasiswa;
    strcpy(mahasiswa.id, _id);
    strcpy(mahasiswa.name, _name);
    strcpy(mahasiswa.year, _year);
    mahasiswa.gender = _gender;
    mahasiswa.dorm = malloc (sizeof(struct dorm_t));
    mahasiswa.dorm = NULL;
    return mahasiswa;
}


void print_student(struct student_t _student){
    if (_student.dorm == NULL){
        if (_student.gender==GENDER_MALE){
        printf("%s|%s|%s|male|unassigned\n", _student.id, _student.name, _student.year);
        } else if (_student.gender==GENDER_FEMALE){
        printf("%s|%s|%s|female|unassigned\n", _student.id, _student.name, _student.year);
        }
    } 
}