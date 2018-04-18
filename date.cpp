//
// Created by Joana Ferreira on 18/04/2018.
//

Date::Date(string yearMonthDay)
{
	year = (int) yearMonthDay.substr(yearMonthDay, 0, 4);
	month = (int) yearMonthDay.substr(yearMonthDay, 5, 2);
	day = (int) yearMonthDay.substr(yearMonthDay, 8, 2);
}

