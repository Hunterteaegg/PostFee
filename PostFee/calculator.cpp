#include "calculator.h"
#include <math.h>

double air_calculator(float weight,Group group)
{
    int int_weight=int(ceil(weight));
    double postfee=0;

    if(group==FIRST)
    {
        if(int_weight<=20)
        {
            postfee=5.5;
        }
        else
        {
            postfee=5.5+((int_weight-20)/10)*2.5;

            if((int_weight-20)%10!=0)
            {
                postfee+=2.5;
            }
        }
    }
    else if(group==SECOND)
    {
        if(int_weight<=20)
        {
            postfee=6;
        }
        else
        {
            postfee=6+((int_weight-20)/10)*2.8;

            if((int_weight-20)%10!=0)
            {
                postfee+=2.8;
            }
        }
    }
    else if(group==THIRD)
    {
        if(int_weight<=20)
        {
            postfee=7;
        }
        else
        {
            postfee=7+((int_weight-20)/10)*3.3;

            if((int_weight-20)%10!=0)
            {
                postfee+=3.3;
            }
        }
    }

    return postfee;
}

double air_ship_calculator(float weight,Group group)
{
    int int_weight=int(ceil(weight));
    double postfee=0;

    if(group==FIRST)
    {
        if(int_weight<=20)
        {
            postfee=5.0;
        }
        else
        {
            postfee=5.0+((int_weight-20)/10)*2.1;

            if((int_weight-20)%10!=0)
            {
                postfee+=2.1;
            }
        }
    }
    else if(group==SECOND)
    {
        if(int_weight<=20)
        {
            postfee=5.5;
        }
        else
        {
            postfee=5.5+((int_weight-20)/10)*2.4;

            if((int_weight-20)%10!=0)
            {
                postfee+=2.4;
            }
        }
    }
    else if(group==THIRD)
    {
        if(int_weight<=20)
        {
            postfee=6.5;
        }
        else
        {
            postfee=6.5+((int_weight-20)/10)*2.9;

            if((int_weight-20)%10!=0)
            {
                postfee+=2.9;
            }
        }
    }

    return postfee;
}

double ship_calculator(float weight)
{
    int int_weight=int(ceil(weight));
    double postfee=0;

    if(int_weight<=20)
    {
        postfee=4.0;
    }
    else
    {
        postfee=4.0+((int_weight-20)/10)*2.0;

        if((int_weight-20)%10!=0)
        {
            postfee+=2.0;
        }
    }

    return postfee;
}
