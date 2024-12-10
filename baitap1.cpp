#include <stdio.h>

int main() {
    // Kiểu int: Dùng để lưu trữ các số nguyên (không có phần thập phân).
    int age = 25;

    // Kiểu float: Dùng để lưu trữ các số thực có phần thập phân (độ chính xác thấp).
    float temperature = 36.5f;

    // Kiểu double: Dùng để lưu trữ các số thực với độ chính xác cao hơn kiểu float.
    double price = 199.99;

    // Kiểu char: Dùng để lưu trữ một ký tự duy nhất (mã ASCII).
    char grade = 'A';

    // Kiểu long: Dùng để lưu trữ số nguyên có giá trị lớn hơn int.
    long population = 7800000000;

    // Kiểu short: Dùng để lưu trữ số nguyên với phạm vi nhỏ hơn int.
    short int day = 15;

    // Kiểu unsigned: Dùng để lưu trữ số nguyên không âm (chỉ có giá trị dương hoặc 0).
    unsigned int count = 100;

    printf("Age: %d\n", age);
    printf("Temperature: %.2f\n", temperature);
    printf("Price: %.2f\n", price);
    printf("Grade: %c\n", grade);
    printf("Population: %ld\n", population);
    printf("Day: %hd\n", day);
    printf("Count: %u\n", count);

    return 0;
}
