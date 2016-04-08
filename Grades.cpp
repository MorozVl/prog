//Grades.cpp
//mark/c++/Grades.cpp "path for linux"

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;


int main(){
	
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
	
	cout << "Do you want to calculate a grade? ";
	cin >> moreGradesToCalculate;
	
	for(int i = 0; i < moreGradesToCalculate.length(); i++){
		moreGradesToCalculate[i] = toupper(moreGradesToCalculate[i]);
	}
	while (moreGradesToCalculate == "YES"){
//для какого студента вести расчиет
	
	cout << "Enter student type " <<
		"(1 = English; 2 = Math; 3 = Science): ";
	cin.getline(response, 256);
	if (strlen(response) == 0){
		cout << "You must select a Student type";
		return 1;
	}
	if ((atoi(response) < 1 ) || atoi(response) > 3 ) {
		cout << response << " - is a not valid student type";
		return 1;
	}
//подходящий тип студента, вычисление оценки

	switch(atoi(response)){
		case 1:
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
//вывод оценки			
			cout << endl << "***ENGLISH STUDENT*** " << endl;
			cout << "Midterm grade is	: " << midterm << endl;
			cout << "Final Exam grade is	: " << finalExamGrade << endl;
			cout << "Research grade is	: " << research << endl;
			cout << "Presentation grade is	: " << presentation << endl << endl;
			cout << "The final numeric grade is: " << finalNumericGrade << endl;
			cout << "The final leter grade is: " << finalLetterGrade << endl;
		break;

//студент математики		
		case 2:
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
//вывод оценки			
			cout << endl << "***MATH STUDENT*** " << endl;
			cout << "Midterm grade is	: " << midterm << endl;
			cout << "Final Exam grade is	: " << finalExamGrade << endl;
			cout << "The final numeric grade is: " << finalNumericGrade << endl;
			cout << "The final leter grade is: " << finalLetterGrade << endl;
		break;
		
//Студент естественных наук

		case 3:
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
//вывод оценки			
			cout << endl << "***SCIENCE STUDENT*** " << endl;
			cout << "Midterm grade is	: " << midterm << endl;
			cout << "Final Exam grade is	: " << finalExamGrade << endl;
			cout << "Research grade is	: " << research << endl;
			cout << "The final numeric grade is: " << finalNumericGrade << endl;
			cout << "The final leter grade is: " << finalLetterGrade << endl;
		break;
		
		default: 
			cout << response << " - is not a valid student type";
			return 1;
	}
	
	
	cout << endl << "Do you want to calculate a grade? ";
	cin >> moreGradesToCalculate;
	
	for(int i = 0; i < moreGradesToCalculate.length(); i++){
		moreGradesToCalculate[i] = toupper(moreGradesToCalculate[i]);
		}
	}
	
	cout << "thank for using the Grades Calculation program!";
	
	//system("pause");
	return 0;
}