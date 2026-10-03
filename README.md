# cis165-lab4


"average.cpp" plan
Make 5 variables and use the variables to calculate the sum. Then I will use the "sum" and have it divided by 5 to get the average. Finally I will make sure the variables "sum" and "average" are displayed at the end with labels.

"ocean_levels.cpp" plan
Make a constant for the increasing ocean level at 1.5, represent 5,7,10 years with variables and give them numbered values to represent them. finally multiply the ocean level and the different variable for each year to find the ocean level corresponding with each year and have them displayed with labels.

Tests

Program and test	          Values used        	        Expected results	      Actual results	  Match or correction
Average — assigned values	  28, 32, 37, 24, 33	        Sum = 154 Avg = 30.8	  Sum = 154 Avg = 30.8	Match         
Average — changed values	  23, 21, 67, 76, 49	        Sum = 236 Avg = 47.2	  Sum = 236 Avg = 47.2  Match	       
Ocean — assigned rate	      1.5	                       	7.5, 10.5, 15           7.5, 10.5, 15	        Match
Ocean — changed rate	      4.5	                        22.5, 31.5, 45	        22.5, 31.5, 45	      Match

I Reran every Program to test and make sure.

Explain Your Code

Why should the five values and the average use the double data type?
- The double data type uses decimals so since the average involves decimals its better to use for more accurate results.

Trace the assigned values through sum and average.
- 28 + 32 + 37 + 24 + 33 = 154 "sum"
- 154/5 = 30.8 "average"

Why should the average calculation divide the completed sum rather than only the final value?
- So the average is easier to calculate if the numbers were different, so the code wouldn't have to be changed

Explain how the ocean-level calculations use the annual rate and number of years.
- The annual rate is multiplied by the amount of years to find change over time. (1.5 * 5, 1.5 * 7.5, 1.5 * 10)

Why is the annual ocean-level rate a good candidate for a named constant?
- It doesn't change at all.

Why does the assignment require calculations to be stored before using cout?
- It makes it more neat rather than putting the entire math formula.
