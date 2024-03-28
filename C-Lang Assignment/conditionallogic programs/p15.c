/*15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

int main() {
    int maths, physics, chemistry;
    int totalmarks, math_phy_total;

    // Accepting marks in Maths, Physics, and Chemistry from the user
    printf("Enter marks in Mathematics: ");
    scanf("%d", &maths);

    printf("Enter marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);
    
    totalmarks = maths + physics + chemistry;
    math_phy_total = maths + physics;
    
    if((maths>=65 && physics >=55 && chemistry >=50 && totalmarks>=190)||(math_phy_total>=140))
    {
    	printf("you are eligible for admission");
    	
	}
	else
	{
		printf("you are not eligible for addmission");
	}
}

