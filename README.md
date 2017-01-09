# 工工系計算機程式語言期末考考古題

感謝19級學長提供期末考考古題程式碼。

祝各位期末順利拉~

## 第一題
題目：找出 `3a + 2b + c = 某個數` 且 a, b, c 皆為質數的組合。

關鍵：這題跟期中考的其中一題一樣，就讓他去吧～唯一不一樣的地方只有宣告陣列時使用 `malloc()`。

## 第二題
題目：請用 `struct` 做出兩個點，並算出兩點間的距離。

關鍵：這題可以分為三個部分，(1)做出點，(2)設定點的位置，(3)計算兩點距離。

(1)做出點：我們要做出一個能夠包含 `(x, y)` 點位置的結構。範例如下，

```c
struct Point {
  double x;
  double y;
};
```
而要讓程式能夠做出一個點，則需要，

```c
struct Point *point1;
point1 = (struct Point *)(malloc(sizeof(struct Point)));
// point2同理，你也可以用一個 struct Point *function (void) 來處理這個步驟
```

等一下就能夠用 `point1, point2` 做事囉～

(2) 設定點的位置：把剛剛做的 `point1, point2` 設定我們要的位置

```c
double p1x, p1y;
scanf("%lf %lf", p1x, p1y);
point1->x = p1x;
point1->y = p1y;
// point2同理，你也可以用一個 void function (struct Point *point, double x, double y) 來處理這個步驟
```

(3)計算兩點距離：使用距離公式 `sqrt(x * x + y * y)`

```c
double distance = sqrt((point1->x - point2->x) * (point1->x - point2->x) + (point1->y - point2->y) * (point1->y - point2->y));
```

※注意： `sqrt()` 和 `pow()` 要 `#include <math.h>` 才能使用。

(4) 最後把 `point1, point2` 用 `free()` 釋放掉

```c
free(point1);
free(point2);
```

## 第三題
題目：
關鍵：
