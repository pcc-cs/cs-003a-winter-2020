#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
 protected:
  const int _studentId;
  float _gpa;
 public:
  explicit Student(int);
  void setGpa(float);
  const char *getSummary();
};

class CsStudent : public Student {
 private:
  const char *_coding;
 public:
  CsStudent(int, const char *coding);
  const char *getSummary();
};

#endif  // STUDENT_H_
