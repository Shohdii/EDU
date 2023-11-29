#ifndef DOCTOR_H_
#define DOCTOR_H_


#include <string>
#include <memory>
#include <vector>
using std::vector;
using std::string;
using std::shared_ptr;

#include "course.h"

namespace Faculty {

struct Doctor {
  string user_name_;
  string password_;
  string name_;

  vector<shared_ptr<Course>> teaching_courses_;

};

}

#endif /* DOCTOR_H_ */
