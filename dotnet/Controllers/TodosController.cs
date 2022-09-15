using Microsoft.AspNetCore.Mvc;

namespace copilot_demo.Controllers;

public class Todo
{
    public string Title { get; set; }
    public bool Completed { get; set; }
}

public class TodoDbContext : DbContext
{
    public DbSet<Todo> Todos { get; set; }
}

[ApiController]
[Route("[controller]")]
public class TodosController : ControllerBase
{
    private readonly TodoDbContext _db;

    public TodosController(TodoDbContext dbContext)
    {
        _db = dbContext;
    }

    [HttpGet]
    public IEnumerable<Todo> Get()
    {
        return _db.Todos;
    }

    [HttpPost]
    public async Task<IActionResult> Post(Todo todo)
    {
        _db.Todos.Add(todo);
        await _db.SaveChangesAsync();
        return CreatedAtAction(nameof(Get), new { id = todo.Id }, todo);
    }

    [HttpPut("{id}")]
    public async Task<IActionResult> Put(int id, Todo todo)
    {
        if (id != todo.Id)
        {
            return BadRequest();
        }

        _db.Entry(todo).State = EntityState.Modified;
        await _db.SaveChangesAsync();
        return NoContent();
    }

    [HttpDelete("{id}")]
    public async Task<IActionResult> Delete(int id)
    {
        var todo = await _db.Todos.FindAsync(id);
        if (todo == null)
        {
            return NotFound();
        }

        _db.Todos.Remove(todo);
        await _db.SaveChangesAsync();
        return NoContent();
    }

    [HttpGet("{id}")]
    public async Task<ActionResult<Todo>> Get(int id)
    {
        var todo = await _db.Todos.FindAsync(id);
        if (todo == null)
        {
            return NotFound();
        }

        return todo;
    }

    [HttpGet("completed")]
    public IEnumerable<Todo> GetCompleted()
    {
        return _db.Todos.Where(t => t.Completed);
    }

    [HttpGet("uncompleted")]
    public IEnumerable<Todo> GetUncompleted()
    {
        return _db.Todos.Where(t => !t.Completed);
    }
}
