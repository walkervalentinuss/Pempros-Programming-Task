#include "dorm.h"
#include <stdio.h>
#include <string.h>
/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

struct dorm_t create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender){
    struct dorm_t asrama;
    strcpy(asrama.name, _name);
    asrama.capacity = _capacity;
    asrama.gender = _gender;
    asrama.residents_num = 0;
    return asrama;
}


void print_dorm(struct dorm_t _dorm){
    if (_dorm.gender==GENDER_MALE){
        printf("%s|%d|male|%d\n", _dorm.name, _dorm.capacity, _dorm.residents_num);
    } else {
        printf("%s|%d|female|%d\n", _dorm.name, _dorm.capacity, _dorm.residents_num);
    }
}
