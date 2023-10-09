#include "student.h"
#include "dorm.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file
 *
 */

struct student_t create_student(char *input)
{
  struct student_t mhs;
  strcpy(mhs.id, strtok(NULL, "#"));
  strcpy(mhs.name, strtok(NULL, "#"));
  strcpy(mhs.year, strtok(NULL, "#"));
  char *gndr = strtok(NULL, "#");
  if (strcmp(gndr, "male") == 0)
  {
    mhs.gender = GENDER_MALE;
  }
  else if (strcmp(gndr, "female") == 0)
  {
    mhs.gender = GENDER_FEMALE;
  }
  mhs.dorm = NULL;
  mhs.dorm = malloc(1 * sizeof(struct dorm_t));
  strcpy(mhs.dorm->name, "unassigned");

  return mhs;
}

void print_student(struct student_t mhs)
{
  printf("%s|%s|%s|", mhs.id, mhs.name, mhs.year);
  if (mhs.gender == GENDER_MALE)
  {
    printf("male\n");
  }
  else if (mhs.gender == GENDER_FEMALE)
  {
    printf("female\n");
  }
}
void dorm_empty(struct student_t *mhs, struct dorm_t drm, char *asrama, int zstd, int zdrm)
{
  int x = 0;
  for ( x = 0; x < zstd; ++x)
  {
    if (mhs[x].dorm != NULL)
    {
      if (strcmp(asrama, mhs[x].dorm->name) == 0)
      {
        free(mhs[x].dorm);
        mhs[x].dorm = NULL;
      }
      
    }
    
  }
  
}
void print_student_detail(struct student_t mhs)
{
  printf("%s|%s|%s|", mhs.id, mhs.name, mhs.year);
  if (mhs.gender == GENDER_MALE)
  {
    printf("male|");
  }
  else if (mhs.gender == GENDER_FEMALE)
  {
    printf("female|");
  }
  printf("%s\n", mhs.dorm->name);
}

void assign_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int zstd, int zdrm, int find_id(char *nim, int zstd, struct student_t *mhs), int find_dorm(char *asrama, int zdrm, struct dorm_t *drm))
{
  int maha = find_id(nim, zstd, mhs);
  int asra = find_dorm(asrama, zdrm, drm);
  if (drm[asra].capacity != drm[asra].residents_num)
  {
    strcpy(mhs[maha].dorm->name, asrama);
    drm[asra].residents_num++;
  }
}

int find_id(char *nim, int zstd, struct student_t *mhs)
{
  int find_id;
  for (int m = 0; m < zstd; m++)
  {
    if (strcmp(nim, mhs[m].id) == 0)
    {
      find_id = m;
    }
  }
  return find_id;
}

void move_student(struct dorm_t *drm, struct student_t *mhs, char *nim, char *asrama, int zstd, int zdrm, int find_id(char *nim, int zstd, struct student_t *mhs), int find_dorm(char *asrama, int zdrm, struct dorm_t *drm))
{
  int maha = find_id(nim, zstd, mhs);
  char before[20];
  strcpy(before, mhs[maha].dorm->name);
  int asrabefore = find_dorm(before, zdrm, drm);
  int asraafter = find_dorm(asrama, zdrm, drm);
  if (drm[asraafter].capacity != drm[asraafter].residents_num)
  {
    drm[asrabefore].residents_num--;
    strcpy(mhs[maha].dorm->name, asrama);
    drm[asraafter].residents_num++;
  }
}