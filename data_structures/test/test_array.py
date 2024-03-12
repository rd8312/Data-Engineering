from arraylist.array import ArrayList

def test_ArrayList():

    array_list = ArrayList(10)
    assert array_list.capacity == 10

    array_list.add(1)
    array_list.add(12)
    assert array_list.size == 2
    assert array_list.data[0] == 1
    assert array_list.data[1] == 12

    array_list.add(5)
    array_list.add(8)
    array_list.add(13)
    del_n = array_list.delete(2)
    assert del_n == 5
    assert array_list.size == 4
    assert array_list.data == [1, 12, 8, 13, 0, 0, 0, 0, 0, 0]

    array_list.modify(2, 70)
    assert array_list.data == [1, 12, 70, 13, 0, 0, 0, 0, 0, 0]
    assert array_list.size == 4

    array_list.resize(3)
    assert array_list.size == 3
    assert array_list.data == [1, 12, 70]

    array_list.resize(8)
    assert array_list.data == [1, 12, 70, 0, 0, 0, 0, 0]













