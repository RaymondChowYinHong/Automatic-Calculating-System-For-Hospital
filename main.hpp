//This hpp file conatins all the function prototype

//register and login system
/* Function Prototype prototype Purpose  : To ask for user choice to register or login*/
int LOGIN_REGISTER();
/* Function Prototype Purpose  : To register user's ID and password into txt file*/
void Register();
/* Function Prototype Purpose  : To check whether the ID and password are available in the txt file*/
bool IsloggedIn();


// display tittle and main menu
/* Function Prototype Purpose  : To display the tittle*/
void display_tittle();
/* Function Prototype Purpose  : To display the type of charge*/
void display_menu();


//medicine
/* Function Prototype Purpose  : To list out the medicine menu     */
void display_medicine_menu();
/* Function Prototype Purpose  : To accept answer for medicine choice and calculate the medicine charge*/
double Calc_medicine_charge(double , int, int &, double &);


//surgery
/* Function Prototype Purpose  : To list out the surgery menu     */
void display_surgery_menu();
/* Function Prototype Purpose  : To accept answer for choice of surgery and calculate the surgery charge*/
double Calc_surgery_charge(double , int, int &, double &);


//service
/* Function Prototype Purpose  : To list out the service menu     */
void display_service_menu();
/* Function Prototype Purpose  : To accept answer for choice of service and calculate the service charge*/
double Calc_service_charge(double , int, int &, double &);


//hospital stay
/* Function Prototype Purpose  : To list out the hospital stay menu     */
void display_hospitalstay_menu();
/* Function Prototype Purpose  : To accept answer for hospital stay choice and calculate the hospital stay charge*/
double Calc_hospitalstay_charge(double, int, int &, double &);


//food drink
/* Function Prototype Purpose  : To list out the food drink menu     */
void display_fooddrink_menu();
/* Function Prototype Purpose  : To accept answer for food drink choice and calculate the food drink charge*/
double Calc_fooddrink_charge(double , int, int &, double &);


// list out patient item and total charge
/* Function Prototype Purpose  : To list out all the items purchased by patient    */
void Display_patient_item(int, int, double, size_t);
/* Function Prototype Purpose: To calculate total chages by adding up medicine charge, surgery charge, service charge, hospital stay charge and food drink charge*/
double Calc_Total_Charge(double , double , double , double , double );


//check patient
/* Function Prototype Purpose  : To display menu to ask availability of new patient     */
void display_checkpatient_menu();
/* Function Prototype Purpose  : To accept answer for availability of new patient and return answer to main function*/
int Check_new_patient();
