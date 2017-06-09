#ifndef _OBSERVER_H_
#define _OBSERVER_H_
class square;

enum class SubscriptionType { All, SwitchOnly };

class observer {
 public:
//  virtual void notify(square &c) = 0;  // c is the Cell that called the notify method
 // virtual SubscriptionType subType() = 0;
  virtual ~observer() = default;
 // virtual void prettyprint() = 0;
};
#endif
