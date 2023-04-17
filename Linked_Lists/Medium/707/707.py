class Node:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class MyLinkedList:

    def __init__(self):
        self.head = None
        self.size = 0

    def get(self, index: int) -> int:
        if index < 0 or index >= self.size:
            return -1
        if self.head is None:
            return -1

        temp = self.head
        for i in range(index):
            temp = temp.next
        return temp.val

    def addAtHead(self, val: int) -> None:
        temp = Node(val, self.head)
        self.head = temp
        self.size += 1

    def addAtTail(self, val: int) -> None:
        temp = self.head
        if temp is None:
            self.head = Node(val)
        else:
            while temp.next is not None:
                temp = temp.next
            temp.next = Node(val)
        self.size += 1

    def addAtIndex(self, index: int, val: int) -> None:
        if index < 0 or index > self.size:
            return
        if index == 0:
            self.addAtHead(val)
        else:
            temp = self.head
            for i in range(index - 1):
                temp = temp.next
            node = Node(val, temp.next)
            temp.next = node
            self.size += 1

    def deleteAtIndex(self, index: int) -> None:
        if index < 0 or index >= self.size:
            return
        temp = self.head
        if index == 0:
            self.head = temp.next
        else:
            for i in range(index - 1):
                temp = temp.next
            temp.next = temp.next.next
        self.size -= 1

# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)