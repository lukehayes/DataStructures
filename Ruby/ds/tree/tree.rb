# frozen_string_literal:true

module DS
  # A basic tree implementation without any kind of
  # balancing rules at all.
  #
  class Tree
    attr_accessor :value, :next_tree
    attr_reader :max_children

    def initialize()
      @values = []
      @max_children = 2
    end

    def insert(value)
      if @values.size < max_children
        puts "Inserting Children"
        @values.push(value)
      else
        puts "Cant insert. Subdivide"
      end
    end

  end
end
