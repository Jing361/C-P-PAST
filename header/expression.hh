#ifndef __EXPRESSION_HH__
#define __EXPRESSION_HH__

#include<memory>

#include"operation.hh"

class expression{
private:
  operation mOperator;
  std::unique_ptr<expression> mLhs;
  std::unique_ptr<expression> mRhs;
};

#endif

