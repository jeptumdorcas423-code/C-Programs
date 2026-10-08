#include <iostream>
using namespace std;

void getCustomerDetails(string &customer_name, float &units_consumed,
                        float &Rate_Per_Unit)
{
    cout << "Enter Customer Name:" << endl;
    cin >> customer_name;

    cout << "Enter Units Consumed:" << endl;
    cin >> units_consumed;

    cout << "Enter Rate Per Unit:" << endl;
    cin >> Rate_Per_Unit;
}

float calculateBill(float units_consumed, float Rate_Per_Unit)
{
    return units_consumed * Rate_Per_Unit;
}

float applyDiscount(float Bill, float units_consumed)
{
    float Discount;

    if (units_consumed > 100)
    {
        Discount = 0.10 * Bill;
    }
    else
    {
        Discount = 0;
    }

    return Discount;
}

void displayBill(string customer_name, float units_consumed,
                 float Rate_Per_Unit, float Discount,
                 float Bill, float final_Bill)
{
    cout << endl;
    cout << "========================" << endl;
    cout << "      WATER BILL        " << endl;
    cout << "========================" << endl;

    cout << "Customer Name: " << customer_name << endl;
    cout << "Units Consumed: " << units_consumed << endl;
    cout << "Rate Per Unit: " << Rate_Per_Unit << endl;
    cout << "Total Bill: " << Bill << endl;
    cout << "Discount: " << Discount << endl;
    cout << "Final Amount Payable: " << final_Bill << endl;
}

int main()
{
    string customer_name;
    float units_consumed;
    float Rate_Per_Unit;
    float Bill;
    float Discount;
    float final_Bill;

    getCustomerDetails(customer_name, units_consumed, Rate_Per_Unit);

    Bill = calculateBill(units_consumed, Rate_Per_Unit);

    Discount = applyDiscount(Bill, units_consumed);

    final_Bill = Bill - Discount;

    displayBill(customer_name, units_consumed, Rate_Per_Unit,
                Discount, Bill, final_Bill);

    return 0;
}