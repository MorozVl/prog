//Grades.cpp
//mark/c++/Grades.cpp "path for linux"
//E:\c++\prog "path for windows PC <home>"
//test
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int whatKindOfStudent();
void calculateEnglishGrade();
void calculateMathGrade();
void calculateScienceGrade();

void displayGrade(int midterm, int finalExamGrade, 
	int research, int presentation, float finalNumericGrade,
	char finalLetterGrade);

void displayGrade(int midterm, int finalExamGrade,
	float finalNumericGrade, char finalLetterGrade);

void displayGrade(int midterm, int finalExamGrade, 
	int research, float finalNumericGrade,  char finalLetterGrade);


const float ENGLISH_MIDTERM_PERCENTAGE = .25;
const float ENGLISH_FINALEXAM_PERCENTAGE = .25;
const float ENGLISH_RESEARCH_PERCENTAGE = .30;
const float ENGLISH_PRESENTATION_PERCENTAGE = .20;
const float MATH_MIDTERM_PERCENTAGE = .5F;
const float MATH_FINALEXAM_PERCENTAGE = .50;
const float SCIENCE_MIDTERM_PERCENTAGE = .40;
const float SCIENCE_FINELEXAM_PERCENTAGE = .40;
const float SCIENCE_RESEARCH_PERCENTAGE = .20;
		
int midterm = 0;
int finalExamGrade = 0;
int research = 0;
int presentation = 0;
float finalNumericGrade = 0;
char finalLetterGrade;
char response[256];
string moreGradesToCalculate;
	

int main(){
	
	int lresponse;
	cout << "Do you want to calculate a grade? ";
	cin >> moreGradesToCalculate;
	
	for(int i = 0; i < moreGradesToCalculate.length(); i++){
		moreGradesToCalculate[i] = toupper(moreGradesToCalculate[i]);
	}
	while (moreGradesToCalculate == "YES" | moreGradesToCalculate == "Y"){
		//для какого студента вести расчиет
		lresponse = whatKindOfStudent();
		switch(lresponse){
			case 1:
				calculateEnglishGrade();
				displayGrade(midterm, finalExamGrade, research,
					presentation, finalNumericGrade, finalLetterGrade);
				break;
			case 2:
				calculateMathGrade();
				displayGrade(midterm, finalExamGrade,
					finalNumericGrade, finalLetterGrade);
				break;
			case 3:
				calculateScienceGrade();
				displayGrade(midterm, finalExamGrade, research,
					finalNumericGrade, finalLetterGrade);
				break;
		}
		cout << endl << endl << "Do you have another grade to calculate? ";
		cin >> moreGradesToCalculate;
		for(int i = 0; i < moreGradesToCalculate.length(); i++){
		moreGradesToCalculate[i] = toupper(moreGradesToCalculate[i]);
		}
	}
	cout << " Thanks for using the Grades Calculation program!";

	return 0;
}

int whatKindOfStudent(){
	int lresponse;
	cout << "Enter student type " <<
		"(1 = English; 2 = Math; 3 = Science): ";
	cin.ignore();			//для корректной работы cin.getline(response, 256);
	cin.getline(response, 256);
	if (strlen(response) == 0){
		cout << "You must select a Student type";
		exit(1);
	}
	if ((atoi(response) < 1 ) || atoi(response) > 3 ) {
		cout << response << " - is a not valid student type";
		exit(2);
	}
	return atoi(response);
}

void calculateEnglishGrade(){
	cout << "Enter the Midterm Grade: ";
	cin.getline(response,256);
	midterm = atoi(response);
	
	cout << "Enter the Final Exam Grade: ";
	cin.getline(response, 256);
	finalExamGrade = atoi(response);
	
	cout << "Enter the Research Grade: ";
	cin.getline(response, 256);
	research = atoi(response);
			
	cout << "Enter the Presentation Grade: ";
	cin.getline(response, 256);
	presentation = atoi(response);
//Вычисление оценки			
	finalNumericGrade = (midterm * ENGLISH_MIDTERM_PERCENTAGE + 
			finalExamGrade * ENGLISH_FINALEXAM_PERCENTAGE + 
			research * ENGLISH_RESEARCH_PERCENTAGE +
			presentation * ENGLISH_PRESENTATION_PERCENTAGE);
//Перевод в буквенную оценку			
	if (finalNumericGrade > 93 ) finalLetterGrade = 'A';
	else 
		if (finalNumericGrade < 93 && finalNumericGrade >= 85 )  finalLetterGrade = 'B';
	else
		if (finalNumericGrade < 85 && finalNumericGrade >= 78) finalLetterGrade = 'C';
	else 
		if (finalNumericGrade < 78 && finalNumericGrade >= 70) finalLetterGrade = 'D';
	else 
		if (finalNumericGrade < 70) finalLetterGrade = 'F';
}

void calculateMathGrade(){
	cout << "Enter the Midterm Grade: ";
	cin.getline(response,256);
	midterm = atoi(response);
			
	cout << "Enter the Final Exam Grade: ";
	cin.getline(response, 256);
	finalExamGrade = atoi(response);
			
//Вычисление оценки			
	finalNumericGrade = (midterm * MATH_MIDTERM_PERCENTAGE + 
			finalExamGrade * MATH_FINALEXAM_PERCENTAGE );
//Перевод в буквенную оценку			
	if (finalNumericGrade >= 90 ) finalLetterGrade = 'A';
	else 
		if (finalNumericGrade < 90 && finalNumericGrade >= 83 )  finalLetterGrade = 'B';
	else
		if (finalNumericGrade < 83 && finalNumericGrade >= 76) finalLetterGrade = 'C';
	else 
		if (finalNumericGrade < 76 && finalNumericGrade >= 65) finalLetterGrade = 'D';
	else 
		if (finalNumericGrade < 65) finalLetterGrade = 'F';
}

void calculateScienceGrade(){
	cout << "Enter the Midterm Grade: ";
	cin.getline(response,256);
	midterm = atoi(response);
			
	cout << "Enter the Final Exam Grade: ";
	cin.getline(response, 256);
	finalExamGrade = atoi(response);
			
	cout << "Enter the Research Grade: ";
	cin.getline(response, 256);
	research = atoi(response);
			
//Вычисление оценки			
	finalNumericGrade = (midterm * SCIENCE_MIDTERM_PERCENTAGE + 
			finalExamGrade * SCIENCE_FINELEXAM_PERCENTAGE + 
			research * SCIENCE_RESEARCH_PERCENTAGE);
//Перевод в буквенную оценку			
	if (finalNumericGrade > 90 ) finalLetterGrade = 'A';
	else 
		if (finalNumericGrade < 90 && finalNumericGrade >= 80 )  finalLetterGrade = 'B';
	else
		if (finalNumericGrade < 80 && finalNumericGrade >= 70) finalLetterGrade = 'C';
	else 
		if (finalNumericGrade < 70 && finalNumericGrade >= 60) finalLetterGrade = 'D';
	else 
		if (finalNumericGrade < 60) finalLetterGrade = 'F';
}

void displayGrade(int midterm, int finalExamGrade, 
	int research, int presentation, float finalNumericGrade,
	char finalLetterGrade){
	cout << endl << "***ENGLISH STUDENT*** " << endl;
	cout << "Midterm grade is	: " << midterm << endl;
	cout << "Final Exam grade is	: " << finalExamGrade << endl;
	cout << "Research grade is	: " << research << endl;
	cout << "Presentation grade is	: " << presentation << endl << endl;
	cout << "The final numeric grade is: " << finalNumericGrade << endl;
	cout << "The final leter grade is: " << finalLetterGrade << endl;
}

void displayGrade(int midterm, int finalExamGrade,
	float finalNumericGrade, char finalLetterGrade){
	cout << endl << "***MATH STUDENT*** " << endl;
	cout << "Midterm grade is	: " << midterm << endl;
	cout << "Final Exam grade is	: " << finalExamGrade << endl;
	cout << "The final numeric grade is: " << finalNumericGrade << endl;
	cout << "The final leter grade is: " << finalLetterGrade << endl;
}

void displayGrade(int midterm, int finalExamGrade, 
	int research, float finalNumericGrade,  char finalLetterGrade){
	cout << endl << "***SCIENCE STUDENT*** " << endl;
	cout << "Midterm grade is	: " << midterm << endl;
	cout << "Final Exam grade is	: " << finalExamGrade << endl;
	cout << "Research grade is	: " << research << endl;
	cout << "The final numeric grade is: " << finalNumericGrade << endl;
	cout << "The final leter grade is: " << finalLetterGrade << endl;
}