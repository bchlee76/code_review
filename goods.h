#ifndef GOODS_H_
#define GOODS_H_

// Goods class for representing goods information with index and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetIndex() << " - " << test.GetPrice << endl;
class Goods{
 public:
  Goods(const int index, const int price)
    : goods_index_(index), goods_price_(price) {}
  void SetGoodsInfo(const int index, const int price);
  int GetIndex() const;
  int GetPrice() const;

 private:
  int goods_index_ = 0;
  int goods_price_ = 0;
};


#endif  // GOODS_H_
