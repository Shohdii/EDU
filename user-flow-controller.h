
#ifndef USERS_FLOW_CONTROLLER_H_
#define USERS_FLOW_CONTROLLER_H_

#include <string>
#include <memory>
#include <vector>
using std::vector;
using std::string;
using std::shared_ptr;

namespace Faculty {

struct UserFlowController {
  void ShowMainMenu();		// Major function to run the application
  void DoLogin();
  void DoSignUp();

};

// Global objects are not preferred. In future, learn singleton design pattern
extern shared_ptr<UserFlowController> gUserFlowController;

}

#endif /* USERS_FLOW_CONTROLLER_H_ */
