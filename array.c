/**
 * @file array.c
 *
 * @author Donovan Griego
 *
 * @date 9-24-2020
 *
 * Assignment: Lab 3
 *
 * @brief Functions for fundamental array algorithms.
 *
 * @details The functions implemented include basic counting,
 * summing, searching, and basic statistical methods (average,
 * median, the max, the min). Sorting is implemented via
 * bubble sort, a not very efficient sort, and insertion sort.
 *
 * @bugs none
 *
 * @todo implement floating point versions of the functions
 */

 /* lab 3 test array */
 /* copy this array into main to test your program, once you have tested all functions */
 /* rename the array as appropriate for your program */
 /* DO NOT CHANGE ANY VALUES */

/* int a[] = {385, 1113, 1561, 198, 422, 1956, 443, 1062, 1536, 2030, 1866, 1827, 1240, 1039, 520, 524, 1852, 1834, 1313, 1029, 801, 2024, 568, 1645, 1394, 756, 209, 518, 249, 1276, 1875, 518, 624, 1319, 951, 929, 1510, 1277, 1874, 1282, 1542, 1624, 1344, 666, 898, 2099, 1073, 985, 1817, 621, 1897, 501, 881, 701, 381, 510, 1340, 474, 911, 1825, 1985, 1021, 226, 493, 224, 1412, 1657, 1969, 924, 1415, 1486, 349, 1274, 713, 898, 407, 696, 207, 1275, 748, 1063, 1055, 1132, 1827, 1639, 1749, 220, 1215, 458, 1366, 923, 678, 271, 1384, 1054, 730, 1031, 947, 582, 1838, 245, 304, 2070, 1754, 900, 1204, 2044, 1831, 1646, 1202, 462, 592, 492, 1830, 655, 367, 1462, 1110, 1465, 155, 360, 623, 716, 866, 242, 2006, 1479, 1508, 836, 296, 1229, 1316, 483, 1182, 1305, 1619, 621, 1584, 1333, 150, 669, 2031, 626, 1396, 1744, 1516, 1646, 1441, 509, 1346, 1831, 1104, 204, 782, 205, 681, 671, 1567, 2072, 1742, 2099, 1184, 941, 465, 602, 481, 319, 1106, 1948, 1888, 1492, 852, 1802, 353, 132, 1781, 1752, 1661, 1457, 496, 1243, 1171, 1836, 1330, 1836, 1924, 1895, 743, 1727, 1850, 368, 1709, 1270, 1545, 409, 1755, 1909, 612, 1096, 2093, 735, 471, 828, 772, 707, 843, 436, 342, 740, 128, 1074, 218, 1534, 793, 1431, 1605, 952, 1561, 231, 562, 1647, 835, 154, 1152, 615, 799, 790, 759, 1646, 121, 735, 264, 476, 1799, 919, 1418, 525, 1590, 1996, 1500, 1601, 953, 1601, 1370, 1981, 1268, 858, 816, 712, 1325, 1262, 594, 395, 1651, 1629, 893, 333, 654, 1887, 1862, 659, 858, 361, 1370, 540, 1163, 671, 948, 988, 550, 684, 824, 1386, 168, 2077, 1602, 1319, 819, 302, 267, 379, 1447, 1096, 657, 1333, 961, 1785, 1550, 1498, 1555, 1647, 392, 296, 1892, 1645, 719, 1290, 200, 1903, 514, 633, 470, 1221, 255, 873, 1182, 1740, 428, 236, 277, 930, 498, 1607, 1909, 1038, 824, 753, 706, 609, 487, 496, 491, 762, 676, 266, 291, 1630, 1792, 726, 1416, 189, 1242, 121, 1645, 1732, 878, 710, 1708, 1189, 1181, 1868, 354, 1562, 1711, 146, 835, 770, 1135, 1776, 1614, 1857, 156, 1988, 502, 1067, 490, 1028, 580, 165, 1637, 232, 589, 1115, 236, 117, 730, 1349, 1063, 673, 773, 479, 425, 1010, 1925, 371, 1392, 995, 1024, 410, 655, 521, 150, 1046, 744, 887, 1996, 1117, 1799, 811, 1165, 1319, 926, 1989, 669, 1398, 342, 1283, 630, 1640, 191, 1287, 2002, 499, 180, 162, 1105, 1455, 1041, 364, 2100, 1931, 768, 485, 860, 1748, 1608, 1091, 748, 1290, 1785, 149, 844, 947, 2021, 1397, 228, 598, 915, 741, 121, 989, 263, 359, 1724, 679, 404, 1064, 369, 1328, 1312, 353, 1142, 315, 1073, 237, 1946, 564, 1211, 578, 2089, 1232, 610, 1169, 2062, 514, 801, 525, 1348, 1599, 1501, 1352, 823, 1648, 1594, 782, 562, 234, 1730, 814, 1445, 925, 1050, 823, 1475, 359, 1295, 1305, 806, 390, 1766, 1131, 1857, 259, 183, 154, 1008, 867, 562, 591, 701, 1946, 1827, 1759, 1829, 1656, 777, 274, 1773, 390, 972, 1454, 1550, 257, 512, 908, 499, 1690, 2096, 1541, 1963, 2097, 555, 2055, 591, 621, 2092, 1835, 1723, 537, 309, 307, 719, 371, 301, 783, 1911, 961, 1293, 1919, 1234, 148, 1608, 1019, 640, 2003, 163, 1023, 1577, 494, 447, 1775, 475, 1237, 1714, 949, 1741, 1689, 667, 1347, 462, 1212, 1889, 1416, 1466, 425, 2082, 1260, 1270, 1258, 1415, 739, 1641, 906, 1642, 517, 793, 2040, 1423, 605, 417, 2105, 263, 775, 1225, 1860, 1960, 1201, 1785, 862, 783, 482, 1957, 907, 1781, 1307, 1215, 2098, 802, 368, 1592, 452, 1343, 1468, 1242, 1220, 1868, 270, 1143, 1526, 758, 1443, 1514, 1256, 454, 974, 1352, 649, 410, 1020, 1746, 1428, 1385, 1587, 218, 1401, 1129, 1669, 1734, 166, 272, 1209, 502, 1498, 561, 1979, 601, 312, 484, 1627, 2074, 1477, 1306, 1471, 616, 1995, 681, 1851, 527, 1326, 1106, 156, 638, 726, 1978, 1091, 2010, 990, 643, 1628, 1392, 1151, 1072, 1777, 532, 1868, 1991, 1369, 416, 358, 1231, 373, 1718, 420, 2079, 217, 298, 995, 304, 708, 205, 1293, 1100, 1078, 1903, 961, 2052, 148, 187, 931, 2011, 1462, 1965, 1319, 1122, 732, 1070, 996, 1984, 1369, 1589, 1099, 1977, 1190, 1402, 1940, 1642, 1936, 818, 181, 879, 1258, 1358, 1862, 219, 1496, 707, 155, 1879, 1129, 1321, 126, 474, 1169, 1328, 1479, 1784, 633, 710, 1652, 238, 182, 986, 2098, 1607, 623, 1921, 1484, 442, 975, 1549, 1557, 2116, 790, 1302, 219, 521, 244, 609, 635, 1256, 1813, 644, 1613, 1217, 207, 1327, 884, 724, 272, 771, 1197, 689, 1640, 1178, 179, 147, 1335, 1547, 824, 545, 979, 264, 544, 2004, 1802, 998, 760, 281, 1842, 1278, 1421, 1890, 158, 1269, 990, 600, 832, 2110, 1559, 987, 764, 639, 1560, 640, 1701, 1974, 1022, 919, 1756, 1729, 1347, 970, 229, 126, 857, 1914, 1360, 1852, 2078, 1085, 1366, 1734, 859, 1759, 887, 1732, 242, 1954, 1725, 1685, 824, 725, 207, 619, 1600, 1791, 829, 505, 945, 468, 117, 527, 1322, 581, 889, 414, 378, 132, 150, 692, 1452, 1751, 309, 194, 1393, 1431, 162, 1518, 1268, 122, 1086, 328, 1082, 1529, 830, 565, 1555, 1542, 953, 384, 246, 1306, 1146, 1451, 1770, 1918, 1748, 384, 285, 133, 959, 1621, 1767, 1503, 2050, 1395, 818, 447, 797, 321, 453, 118, 532, 1418, 1530, 1598, 219, 969, 1375, 1055, 1588, 1504, 596, 969, 1190, 250, 1123, 822, 869, 1291, 1190, 2063, 1147, 1193, 1449, 1433, 471, 502, 1763, 1503, 1059, 451, 1505, 1474, 2105, 1270, 1307, 207, 474, 566, 1497, 297, 305, 1977, 1150, 1379, 2110, 156, 436, 1214, 1682, 1861, 1160, 1065, 937, 492, 381, 1644, 1230, 2027, 1030, 172, 714, 770, 1881, 702, 1924, 1072, 792, 281, 1873, 172, 814, 413, 2032, 1847, 2027, 377, 1886, 346, 1474, 1803, 2091, 869, 751, 1263, 1597, 1015, 790, 710, 1278, 1704, 1117, 1875, 357, 881, 812, 516, 188, 1487, 1033, 296, 1894, 1730, 593, 162, 1460, 503, 422, 1581, 1085, 132, 1619, 1059, 1236, 254, 557, 716, 1504, 1231, 1661, 1017, 1170, 661, 775, 1410, 1426, 1470, 162, 1849, 1192, 1078, 2029, 970, 691, 505, 1015, 386, 1243, 1672, 202, 211, 2039, 1704, 1153, 1159, 1841, 1594, 1758, 1581, 1060, 1303, 481, 2113, 1847, 1492, 1758, 1508, 1197, 1803, 1241, 273, 764, 1153, 1478, 1690, 1893, 728, 311, 1019, 635, 396, 1114, 558, 1984, 502, 1600, 2060, 331, 1593, 1876, 1274, 1131, 241, 1270, 862, 1968, 912, 605, 1048, 598, 2081, 1556, 1598, 1117, 917, 1523, 1245, 1880, 1718, 148, 399, 1997, 1497, 840, 216, 1882, 675, 512, 449, 151, 271, 1606, 1166, 747, 1112, 263, 598, 259, 1103, 1882, 1092, 1068, 1321, 573, 420, 122, 1980, 1549, 1885, 1933, 1932, 167, 1813, 1312, 1242, 265, 1429, 1800, 1012, 1761, 187, 1518, 1251, 1236, 149, 598, 1734, 982, 740, 720, 747, 1715, 1671, 1952, 524, 1975, 309, 387, 1759, 2077, 203, 1574, 480, 251, 769, 1605, 751, 433, 1641, 1646, 2078, 1711, 1048, 1564, 1182, 1432, 2045, 1151, 297, 1020, 1754, 928, 618, 1661, 1115, 1025, 1871, 1307, 1647, 1513, 1619, 2085, 970, 1982, 572, 1974, 1823, 1206, 290, 1699, 1088, 603, 1293, 371, 2050, 710, 1686, 330, 1744, 1866, 1233, 1733, 1029, 2087, 1277, 379, 1347, 1031, 1569, 878, 779, 1072, 1198, 1984, 1289, 1653, 193, 1347, 743, 367, 929, 2066, 1205, 457, 320, 1491, 1050, 1889, 2056, 1029, 1990, 1525, 646, 1255, 1495, 1806, 1517, 1077, 1073, 1322, 1838, 2087, 629, 920, 1955, 1801, 808, 2031, 1384, 1786, 633, 548, 1735, 2074, 889, 1938, 1448, 174, 2062, 1387, 1087, 1936, 795, 1968, 1426, 525, 2009, 826, 1486, 1317, 2031, 1559, 1288, 543, 714, 1478, 580, 1406, 1392, 199, 1075, 261, 630, 1046, 218, 1402, 867, 1901, 1812, 1165, 1171, 1134, 1336, 202, 985, 645, 610, 877, 1706, 331, 2078, 1973, 1774, 1249, 751, 371, 962, 1214, 2012, 237, 1296, 971, 733, 162, 1900, 1186, 1799, 1002, 970, 1494, 402, 2025, 511, 1621, 462, 1731, 149, 955, 492, 2091, 1170, 453, 1947, 1179, 1937, 581, 1785, 782, 2031, 1681, 1254, 1562, 887, 223, 1607, 1022, 1292, 1290, 1907, 498, 1019, 545, 758, 1766, 2049, 1103, 1380, 434, 293, 1755, 408, 1698, 443, 238, 760, 615, 1054, 429, 1632, 968, 1993, 1122, 414, 763, 1228, 256, 1668, 755, 1429, 1810, 1136, 684, 238, 1777, 333, 523, 1115, 1596, 840, 1292, 1235, 1483, 873, 1913, 1604, 1517, 412, 893, 181, 279, 1745, 409, 1284, 394, 1055, 747, 533, 958, 1386, 198, 1003, 757, 1117, 1477, 770, 1333, 1883, 1768, 812, 958, 943, 282, 324, 1700, 2079, 163, 1452, 726, 939, 1516, 888, 919, 1808, 2056, 1196, 1098, 1038, 1965, 291, 659, 398, 1177, 1300, 1398, 889, 305, 614, 655, 1956, 1661, 1848, 1135, 1827, 2055, 1070, 141, 2101, 757, 750, 1276, 508, 1873, 2078, 551, 164, 1510, 1532, 1086, 1358, 2058, 1628, 1991, 1470, 1163, 1272, 243, 1351, 121, 1133, 1543, 1665, 865, 913, 1727, 1155, 1866, 1751, 1492, 506, 736, 651, 897, 493}; */


#include "array.h"
#include <stdio.h>


/** prints out the elements of an array, one element per line
 * @param a[] the array to print
 * @param size the size or length of the array
 */
void print_array(int a[], size_t size) {
	int i;

	for(i = 0; i < size; i++)
		printf("a[%d] = %d\n", i, a[i]);
}
/** finds the maximum value in an array
 * 
 * @param a the array to look through
 * @param size size of the array
 * @return int maximum value found
 */
int find_max(int a[], size_t size) {
	int max = a[0];
	for(int i = 0; i < size; i++)
		if(max < a[i])
			max = a[i];
	return max;
}
/** finds the minimum value in an array
 * 
 * @param a the array
 * @param size size of the array
 * @return int minimum value found
 */
int find_min(int a[], size_t size) {
	int min = a[0];
	for(int i = 0; i < size; i++)
		if(min > a[i])
			min = a[i];
	return min;
}
/** finds the midpoint from max and min of an array
 * 
 * @param min minimum of the array
 * @param max maximum of the array
 * @return int midpoint found
 */
int midpoint(int min, int max) {
	return (min + max) / 2;
}
/** finds the count of elements in an array based on the type of operation
 * 
 * @param a the array
 * @param size size of array
 * @param type which operator to use
 * @param x number to run operator against
 * @return int count of valid elements
 */
int get_count(int a[], size_t size, int type, int x) {
	int count = 0;
	switch(type) {
		case LT:
			for(int i = 0; i < size; i++)
				if(a[i] < x)
					count++;
			break;
		case LE:
			for(int i = 0; i < size; i++)
				if(a[i] <= x)
					count++;
			break;
		case EQ:
			for(int i = 0; i < size; i++)
				if(a[i] == x)
					count++;
			break;
		case GE:
			for(int i = 0; i < size; i++)
				if(a[i] >= x)
					count++;
			break;
		case GT:
			for(int i = 0; i < size; i++)
				if(a[i] > x)
					count++;
			break;
		default:
			count = -1;
	}
	return count;
}
/** searches for a given number and returns the index if found
 * 
 * @param a the array
 * @param size size of array
 * @param x number to search for 
 * @return int index of found element 
 */
int linear_search(int a[], size_t size, int x) {
	for(int i = 0; i < size; i++)
		if(a[i] == x)
			return i;
	return -1;
}
/** finds the sum of the elements in an array
 * 
 * @param a the array
 * @param size size of array
 * @return int the sum of the elements
 */
int sum(int a[], size_t size) {
	int sum = 0;
	for(int i = 0; i < size; i++)
		sum += a[i];
	return sum;
}
/** finds the average of elements in an array
 * 
 * @param a the array
 * @param size size of the array
 * @return int the average of the elements
 */
int average(int a[], size_t size) {
	return sum(a, size) / size;
}
/** reverses the order of elements in an array
 * 
 * @param a the array
 * @param size size of array
 */
void reverse(int a[], size_t size) {
	int b[size];

	for (int i = 0; i < size; i++) {
		b[size - 1 - i] = a[i];
	}

	for (int i = 0; i < size; i++) {
		a[i] = b[i];
	}
}
/** finds the count of even elements in an array
 * 
 * @param a the array
 * @param size size of array
 * @return int count of even elements
 */
int even_count(int a[], size_t size) {
	int count = 0;
	for(int i = 0; i < size; i++)
		if(a[i] % 2 == 0)
			count++;
	return count;
}
/** finds the count of odd elements in an array
 * 
 * @param a the array
 * @param size size of array
 * @return int count of odd elements
 */
int odd_count(int a[], size_t size) {
	int count = 0;
	for(int i = 0; i < size; i++)
		if(a[i] % 2 == 1)
			count++;
	return count;
}
/** finds the count of elements divisible by a given number in an array
 * 
 * @param a the array
 * @param size size of array
 * @param x number to check the array against
 * @return int count of elements divisible by x
 */
int divisible_count(int a[], size_t size, int x) {
	int count = 0;
	for(int i = 0; i < size; i++)
		if(a[i] % x == 0)
			count++;
	return count;
}