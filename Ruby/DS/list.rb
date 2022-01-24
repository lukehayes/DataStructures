module DS

  class List

    attr_accessor :head

    def first_node
      @head
    end

    def last_node
      node = @head
      until next_node_nil?(node)
        node = node.next_node
        size += 1
      end
    def insert_at_end(node)
      if size < 1
        @head = node
      else
        last_node.next_node = node
      end
    end

    def size
      size = 0
      head = @head

      return 0 unless head
      size += 1

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

