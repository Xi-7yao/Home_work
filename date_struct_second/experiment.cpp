#include <vector>
#include "type.h"
#include "method.h"

int main()
{
    using namespace INPUT ;
    int n , m ;
    std::vector<Edge> road ;
    INPUT::input(n , m , road) ;        //获得城镇数量，道路数量和道路信息

    std::cout << '\n' ;
    
    using namespace COUT ;
    COUT::print(road) ;

    using namespace FIND_SET ;
    std::vector<int> fa = FIND_SET::init(n) ;       //建立并查集

    using namespace DISPOSE ;
    int ans = DISPOSE::dispose<int>(road , fa) ;    //运用最小生成树处理道路

    std::cout << "最小成本为:" ;
    std::cout << ans << '\n' ;
}