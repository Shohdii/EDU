#ifndef DOCTORS_MANAGER_H_
#define DOCTORS_MANAGER_H_


#include <string>
#include <vector>
#include <memory>
using std::vector;
using std::string;
using std::shared_ptr;

#include "doctor.h"

namespace Faculty {

struct DoctorsManager {
  void AddDummyData();
  shared_ptr<Doctor> GetUser(string user_name, string password);
  void ShowDoctors();

  vector<shared_ptr<Doctor>> doctors_vec_;

};

extern shared_ptr<DoctorsManager> gDoctorsManager;

}


#endif /* DOCTORS_MANAGER_H_ */
