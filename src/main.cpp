#include <iostream>

#include "objectbox-model.h"
#include "objectbox/objectbox-cpp.h"

#include "tasklist.obx.hpp"

int main()
{
    // create_obx_model() provided by objectbox-model.h
    // obx interface contents provided by objectbox-cpp.h
    obx::Store store(create_obx_model());
    obx::Box<Task> box(store);

    Task newTask = {/*Id for insertion*/0, "Hello"};
    obx_id id = box.put(newTask); // Create
    std::unique_ptr<Task> task = box.get(id);  // Read
    if (task) {
        task->text.append(" World");
        std::cout << task->id << "\n";
        std::cout << task->text << "\n";
        box.put(*task); // Update
        box.remove(id); // Delete
    }
    return 0;
}