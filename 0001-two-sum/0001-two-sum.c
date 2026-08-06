#include <stdlib.h>


struct hash_item {
    int key;
    int val;
    UT_hash_handle hh;
};

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {struct hash_item *hash_table = NULL;

    for (int i = 0; i < numsSize; i++) {
        int current_num = nums[i];
        int complement = target - current_num;

        struct hash_item *found_item;
        HASH_FIND_INT(hash_table, &complement, found_item);

        if (found_item != NULL) {
            int* result = (int*)malloc(2 * sizeof(int));
            if (result == NULL) {
                struct hash_item *current, *tmp;
                HASH_ITER(hh, hash_table, current, tmp) {
                    HASH_DEL(hash_table, current);
                    free(current);
                }
                *returnSize =0;
                return NULL;
            }
            result[0] = found_item->val;
            result[1] = i;
            *returnSize = 2;

            struct hash_item *current, *tmp;
            HASH_ITER(hh, hash_table, current, tmp) {
                HASH_DEL(hash_table, current);
                free(current);
            }
            return result;
        }

        struct hash_item *new_item = (struct hash_item*)malloc(sizeof(struct hash_item));
        if(new_item == NULL) {
            struct hash_item *current, *tmp;
            HASH_ITER(hh, hash_table, current, tmp) {
                HASH_DEL(hash_table, current);
                free(current);
            }
            *returnSize = 0;
            return NULL;
        }
        new_item->key = current_num;
        new_item->val = i;
        HASH_ADD_INT(hash_table, key, new_item);
    }
    
    *returnSize = 0;
    return NULL;
}