#include <iostream>
using namespace std;

int main() {

    cout << "1) Items with price >= 250\n";
    cout << "SELECT pro_name, pro_price\n"
         << "FROM product\n"
         << "WHERE pro_price >= 250\n"
         << "ORDER BY pro_price DESC, pro_name ASC;\n\n";

    cout << "2) Cheapest item\n";
    cout << "SELECT pro_name, pro_price\n"
         << "FROM product\n"
         << "WHERE pro_price = (SELECT MIN(pro_price) FROM product);\n\n";

    cout << "3) Average price for each company\n";
    cout << "SELECT pro_code, AVG(pro_price) AS average_price\n"
         << "FROM product\n"
         << "GROUP BY pro_code;\n\n";

    cout << "4) Overall average price\n";
    cout << "SELECT AVG(pro_price) AS overall_average_price\n"
         << "FROM product;\n";

    return 0;
}
