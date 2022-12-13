#include <vector>
#include "type.h"
#include "method.h"

int main()
{
    using namespace INPUT ;
    int n , m ;
    std::vector<Edge> road ;
    INPUT::input(n , m , road) ;        //��ó�����������·�����͵�·��Ϣ

    std::cout << '\n' ;
    
    using namespace COUT ;
    COUT::print(road) ;

    using namespace FIND_SET ;
    std::vector<int> fa = FIND_SET::init(n) ;       //�������鼯

    using namespace DISPOSE ;
    int ans = DISPOSE::dispose<int>(road , fa) ;    //������С�����������·

    std::cout << "��С�ɱ�Ϊ:" ;
    std::cout << ans << '\n' ;
}