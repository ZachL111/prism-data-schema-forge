#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{57, 52, 17, 61};
    assert(domain_review_score(item) == 176);
    assert(domain_review_lane(item) == "ship");
}
