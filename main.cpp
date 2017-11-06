/**<
Patrick Roche
Exercise 5
Method of least Squares of Linear Regression */

/**< Preprocessor Directives */
#include <iostream>

using namespace std;

/**< Main Fucntion */
int main()
{
    /**< Decleration of x and y as arrays with 100 elements each */
    double x[100] = {0};
    double y[100] = {0};

    /**< integer value of n will be whatever number is entered */
    int n;
    /**< Counting Integer */
    int i;
    /**< Characters declaring bracket 1, bracket2 and comma, which are used in the for loop.
    I couldn't write it as (x,y) so had to use b1,b2 and com. Also makes it neater */
    char b1, com, b2;

    /**< Variable declerations */
    double sumx, sumy, sumprod, sumxsquared, avgx, avgy;
    double slope, intercept;

    /**< Heading */
    cout << "Linear Regression\n" << endl;

    /**< Prompting the user to enter a value for n */
    cout << "enter value for n: " << endl;
    cin >> n;

    /**< While loop making sure the number entered is between 1-100 */
    while(n>100 || n<1)
    {
        cout << "enter value for n between 1-100: " << endl;
        cin >> n;
    }

    /**< Prompting the user to enter the values in this form (x,y) */
    cout << "Enter these " << n << " data points in the form (x,y): " << endl;

    /**< For loop containing the data points in the form (x,y). i<n means that we can run the for loop a number of time equal to the number
    of data point 'n' and i++ is added 1 to the end of each step to 'i' */
    for(i=0;i<n;i++)
    {
        /**< will be presented at (x,y) */
     cin >> b1 >> x[i] >> com >> y[i] >> b2;
    }

    /**< i is starting at 0, i<n means that we can run the for loop a number of time equal to the number
    of data point 'n' and i++ is added 1 to the end of each step to 'i' */
    for(i=0;i<n;i++)
    {
        /**< Calculating the sums of x,y,product and x squared */
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumprod = sumprod + (x[i]*y[i]);
        sumxsquared = sumxsquared + (x[i]*x[i]);
    }

    /**< Calculating the average of the x and y values */
    avgx = sumx/n;
    avgy = sumy/n;

    /**< Formula to calculate the slope and intercept */
    slope = ((n*sumprod) - (sumx*sumy))/((n*sumxsquared) - (sumx*sumx));
    intercept = avgy - (slope*avgx);

    /**< Presenting bhe slope and intercept  */
    cout << "Slope: " << slope << endl;
    cout << "Intercept: " << intercept << endl;

    return 0;
}
