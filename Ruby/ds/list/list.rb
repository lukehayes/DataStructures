# frozen_string_literal:true

module DS
  # A singly linked list.
  class List
    include Enumerable

    attr_accessor :head

    def initialize
      @head = ListNode.new(10)
      @head.next_node = ListNode.new(20)
      @head.next_node.next_node = ListNode.new(30)
    end

    def each
      node = @head

      yield node.value unless node.nil?

      while !node.nil?
        node = node.next_node
        yield node.value
      end
    end
  end
end
