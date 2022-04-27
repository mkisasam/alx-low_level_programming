#include <algorithm>
#include <iterator>
auto it = std::search(
    std::begin(Buffer), std::end(Buffer),
    std::begin(a), std::end(a));

if (it == std::end(Buffer))
{
    // not found
}
else
{
}
