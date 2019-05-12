[@react.component]
let make = () => {
  let (state, dispatch) = React.useContext(Store.context);
  let onClick = _ => dispatch(Actions.Increment);
  <p>
    <button onClick> {ReasonReact.string("+")} </button>
    {ReasonReact.string(string_of_int(state.counter))}
  </p>;
};