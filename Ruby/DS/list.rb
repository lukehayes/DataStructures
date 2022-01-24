module DS

  class List
    attr_accessor :head

    def initialize(head)
      @head = head
    end

    def last_node
      node = @head
      until next_node_nil?(node)
        node = node.next_node
        size += 1
      end
    end

    def size
      size = 0
      head = @head
      until next_node_nil?(head)
        head = head.next_node
        size += 1
      end
      size
    end

    def next_node_nil?(node)
      node.next_node === nil
    end

  end
end

